//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView;

@interface ATCTMSHeaderView : UIView
{
    NSString *_actionURLString;
    UIImageView *_bannerImageView;
}

+ (void)fetchTMSImageWithURLString:(id)arg1 imageAction:(id)arg2;
@property(retain, nonatomic) UIImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
@property(copy, nonatomic) NSString *actionURLString; // @synthesize actionURLString=_actionURLString;
- (void).cxx_destruct;
- (void)tapBannerAction:(id)arg1;
- (void)setImage:(id)arg1 withActionURLString:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
