//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CDepthBlurControl : NSObject
{
    struct CGSize m_size;
    int m_nInsideRound;
    int m_nOutsideRound;
    struct CGPoint m_pointClick;
    double m_dAngle;
    char *m_pOldData;
    char *m_pGaussData;
}

- (void)LoadImage:(id)arg1 withLen:(int)arg2 withCount:(int)arg3 withRat:(double)arg4 withIsReal:(BOOL)arg5;
- (id)InitInsideRound:(int)arg1 withOutSide:(int)arg2 withClickPoint:(struct CGPoint)arg3 withIsRoundType:(BOOL)arg4 withAngle:(float)arg5;
- (id)DepthBlurByGauss;
- (id)ResetInsideRound:(int)arg1 withOutSide:(int)arg2;
- (id)ResetClickPoint:(struct CGPoint)arg1;
- (id)DepthBlurByResetClickPoint:(struct CGPoint)arg1 withInsideRound:(int)arg2 withOutsideRound:(int)arg3 withAngle:(double)arg4 withIsRoundType:(BOOL)arg5;
- (id)GetChangedImageByLine;
- (id)GetChangedImageByRound;
- (void)ReleaseAll;
- (void)LoadImage:(id)arg1 withGaussData:(char *)arg2;
- (void)SetGaussData:(id)arg1;
- (char *)GetGaussData;

@end

