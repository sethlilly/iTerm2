//
//  iTermMetalClipView.m
//  iTerm2SharedARC
//
//  Created by George Nachman on 10/2/17.
//

#import "iTermMetalClipView.h"

#import <MetalKit/MetalKit.h>

@implementation iTermMetalClipView

- (instancetype)initWithFrame:(NSRect)frameRect {
    self = [super initWithFrame:frameRect];
    if (self) {
        self.copiesOnScroll = NO;
    }
    return self;
}
/*
- (void)scrollToPoint:(NSPoint)newOrigin {
    [super scrollToPoint:newOrigin];
    NSRect frame = _metalView.frame;
    frame.origin.y = newOrigin.y;
    _metalView.frame = frame;
}
*/
@end
