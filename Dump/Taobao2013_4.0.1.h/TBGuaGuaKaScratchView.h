//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ImageMaskFilledDelegate.h"

@class TBGgkItem, TBGuaGuaKaPopView, TBSTImageMaskView, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface TBGuaGuaKaScratchView : UIView <ImageMaskFilledDelegate>
{
    TBSTImageMaskView *_sTImage;
    TBGuaGuaKaPopView *_popResult;
    TBGgkItem *_dataItem;
    BOOL _isShow;
    UIImage *_image;
    UIImageView *_resultImage;
}

@property(retain, nonatomic) UIImageView *resultImage; // @synthesize resultImage=_resultImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)imageMaskView:(id)arg1 cleatPercentWasChanged:(float)arg2;
- (void)clearSTImage;
- (void)setSTImage;
- (void)setGuaGuaKaItem:(id)arg1;
- (void)initAllSubview:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
