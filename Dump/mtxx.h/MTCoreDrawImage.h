//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MTCoreDrawImage : NSObject
{
    float m_drawHeight;
}

- (struct CGPoint)PointChange:(struct CGPoint)arg1 withMiddlePoint:(struct CGPoint)arg2 byRotate:(float)arg3;
- (void)setCGContextHeight:(float)arg1;
- (void)drawImage:(struct CGContext *)arg1 Image:(struct CGImage *)arg2 AtPoint:(struct CGPoint)arg3 AtRotatePoint:(struct CGPoint)arg4 Rotate:(float)arg5;
- (void)drawImage:(struct CGContext *)arg1 Image:(struct CGImage *)arg2 AtPoint:(struct CGPoint)arg3;
- (void)drawImage:(struct CGContext *)arg1 Image:(struct CGImage *)arg2 InRect:(struct CGRect)arg3;

@end

