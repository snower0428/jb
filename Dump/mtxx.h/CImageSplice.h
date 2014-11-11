//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@interface CImageSplice : NSObject
{
    unsigned char m_nFrameCount;
    char *m_pFrameImage[8];
    int m_pFrameWidth[8];
    int m_pFrameHeight[8];
    int m_nFrameAddX;
    int m_nFrameAddY;
    float m_fRed;
    float m_fGreen;
    float m_fBlue;
    UIImage *m_pTextureImage;
    int m_nSpliceCount;
    int m_nSpliceWidth;
    int m_nSpliceHeight;
    int m_nDistance;
    int m_nSpliceAddWidth;
    int m_nSpliceAddHeight;
    int m_nSpliceSmallAddWidth;
    int m_nSpliceSmallAddHeight;
    int m_nSpliceSmallWidth;
    int m_nSpliceSmallHeight;
    int m_nSmallWidthCount;
    int m_nSmallHeightCount;
    float m_dRat;
    int m_nRetina;
    int m_nAddHeightCount;
    int m_nWidthCount;
    int m_nHeightCount;
}

- (void)InitCImageSplice:(BOOL)arg1;
- (void)ReleaseAll;
- (void)ReleaseSplice;
- (void)ReleaseFrame;
- (BOOL)ReadPuzzleFrameFile:(id)arg1;
- (BOOL)SetTextureImage:(id)arg1;
- (BOOL)SetBackColorWithRed:(float)arg1 withGreen:(float)arg2 withBlue:(float)arg3;
- (void)FrameProcessEx:(char *)arg1 withOtherData:(char *)arg2;
- (id)FrameEffect:(id)arg1 withRat:(float)arg2;
- (id)GetResultImageForUpload:(id)arg1 withMaxWidth:(int)arg2;
- (id)GetResultImage:(id)arg1;
- (id)GetResultFrameImage;
- (void)ResetAllSimpleFrame;
- (BOOL)AddSpliceImage:(struct CGSize)arg1;
- (BOOL)ChangeSpliceImage:(struct CGSize)arg1 withIndex:(int)arg2;
- (struct CGRect)GetSpliceDrawRectWithIndex:(int)arg1;
- (float)GetSpliceRatWithIndex:(int)arg1;

@end
