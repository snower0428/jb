//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWebView.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface YMLImageWebView : UIWebView
{
    NSData *_imageData;
    float _imgWidth;
    float _imgHeight;
}

@property(nonatomic) float imgHeight; // @synthesize imgHeight=_imgHeight;
@property(nonatomic) float imgWidth; // @synthesize imgWidth=_imgWidth;
- (void)dealloc;
- (void)autoScalePageToFit;
- (id)imageData;
- (BOOL)setImageData:(id)arg1;
- (void)prohibitScroll;
- (id)initWithImageData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

