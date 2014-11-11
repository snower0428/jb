//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol PainterProtocol <NSObject>
- (void)paintWithFBOSize:(struct CGSize)arg1 imageRect:(struct CGRect)arg2;
- (void)setCanvas:(id <CanvasProtocol>)arg1;
- (void)resetPainter;
- (void)paintDown;
- (void)paintTo:(struct CGPoint)arg1;
- (void)paintUp;
- (void)updateWithDelta:(float)arg1;
- (void)show;
@end
