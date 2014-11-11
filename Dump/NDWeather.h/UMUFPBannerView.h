//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIColor, UIFont, UMUFPBannerViewInternal;

@interface UMUFPBannerView : UIView
{
    NSString *_mKeywords;
    float _mAnimationDuration;
    float _mIntervalDuration;
    BOOL _mAutoFill;
    id <UMUFPBannerViewDelegate> _delegate;
    UMUFPBannerViewInternal *_mBannerInternal;
    UIColor *_mBackgroundColor;
    UIColor *_mTextColor;
    struct CGRect mImageViewFrame;
    UIFont *mTitleLabelFont;
    struct CGRect mTitleLabelFrame;
    UIFont *mDescriptionLabelFont;
    struct CGRect mDescriptionLabelFrame;
}

+ (void)setAppChannel:(id)arg1;
@property(nonatomic) struct CGRect mDescriptionLabelFrame; // @synthesize mDescriptionLabelFrame;
@property(retain, nonatomic) UIFont *mDescriptionLabelFont; // @synthesize mDescriptionLabelFont;
@property(nonatomic) struct CGRect mTitleLabelFrame; // @synthesize mTitleLabelFrame;
@property(retain, nonatomic) UIFont *mTitleLabelFont; // @synthesize mTitleLabelFont;
@property(nonatomic) struct CGRect mImageViewFrame; // @synthesize mImageViewFrame;
@property(nonatomic) BOOL mAutoFill; // @synthesize mAutoFill=_mAutoFill;
@property(retain, nonatomic) UIColor *mTextColor; // @synthesize mTextColor=_mTextColor;
@property(retain, nonatomic) UIColor *mBackgroundColor; // @synthesize mBackgroundColor=_mBackgroundColor;
@property(copy, nonatomic) NSString *mKeywords; // @synthesize mKeywords=_mKeywords;
@property(nonatomic) float mIntervalDuration; // @synthesize mIntervalDuration=_mIntervalDuration;
@property(nonatomic) float mAnimationDuration; // @synthesize mAnimationDuration=_mAnimationDuration;
@property(nonatomic) id <UMUFPBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didLoadDataFailWithError:(id)arg1 error:(id)arg2;
- (void)didLoadDataFinish:(id)arg1 promoters:(id)arg2;
- (void)setBackgroundImage:(id)arg1;
- (void)requestPromoterDataInBackground;
- (id)initWithFrame:(struct CGRect)arg1 appKey:(id)arg2 slotId:(id)arg3 currentViewController:(id)arg4;
- (void)dealloc;
- (void)handleSingleTap:(id)arg1;

@end
