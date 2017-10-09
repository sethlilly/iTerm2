#import "VT100GridTypes.h"

@import MetalKit;

NS_ASSUME_NONNULL_BEGIN

@protocol iTermMetalTestDriverDataSource<NSObject>

- (id)metalCharacterAtScreenCoord:(VT100GridCoord)coord
                       attributes:(NSDictionary * _Nonnull * _Nonnull)attributes;

- (void)metalDriverWillBeginDrawingFrame;
- (NSImage *)metalImageForCharacterAtCoord:(VT100GridCoord)coord
                                      size:(CGSize)size
                                     scale:(CGFloat)scale;

@end

// Our platform independent render class
NS_CLASS_AVAILABLE(10_11, NA)
@interface iTermMetalTestDriver : NSObject<MTKViewDelegate>

@property (nullable, nonatomic, weak) id<iTermMetalTestDriverDataSource> dataSource;

- (nullable instancetype)initWithMetalKitView:(nonnull MTKView *)mtkView;
- (void)setCellSize:(CGSize)cellSize gridSize:(VT100GridSize)gridSize scale:(CGFloat)scale;
@end

NS_ASSUME_NONNULL_END
