//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@interface CFrameNewSimple : NSObject
{
    int m_nWidth;
    int m_nHeight;
    int m_nCutWidth[4];
    int m_nCutHeight[4];
    double m_dRat;
    unsigned char m_bIsHaveImage[8];
    UIImage *m_pImage[8];
}

- (id)GetImageByIndex:(int)arg1;
- (id)GetCompositeImage:(id)arg1;
- (void)ReadFrameFile:(id)arg1;
- (int)ComputeCut:(int)arg1 withSucaiLen:(int)arg2;
- (int)GetIntFromNSData:(id)arg1;

@end

