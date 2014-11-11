//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MTMaterialSpecialHeader, UIButton, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface MTMaterialDetailHeaderView : UIView
{
    id <MTMaterialDetailHeaderViewDelegate> _delegate;
    UIImageView *_thumbnailImageView;
    UILabel *_describeLabel;
    UIButton *_btnFunction;
    UILabel *_vipNickNameLabel;
    UILabel *_vipLevelLabel;
    UIImageView *_vipLevelImageView;
    MTMaterialSpecialHeader *_areaDetail;
}

@property(retain, nonatomic) MTMaterialSpecialHeader *areaDetail; // @synthesize areaDetail=_areaDetail;
@property(retain, nonatomic) UIImageView *vipLevelImageView; // @synthesize vipLevelImageView=_vipLevelImageView;
@property(retain, nonatomic) UILabel *vipLevelLabel; // @synthesize vipLevelLabel=_vipLevelLabel;
@property(retain, nonatomic) UILabel *vipNickNameLabel; // @synthesize vipNickNameLabel=_vipNickNameLabel;
@property(retain, nonatomic) UIButton *btnFunction; // @synthesize btnFunction=_btnFunction;
@property(retain, nonatomic) UILabel *describeLabel; // @synthesize describeLabel=_describeLabel;
@property(retain, nonatomic) UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(nonatomic) id <MTMaterialDetailHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)actionDeblocking:(id)arg1;
- (void)actionRemoveBindQQVip:(id)arg1;
- (void)actionBindQQVip:(id)arg1;
- (void)actionLogin:(id)arg1;
- (void)awakeFromNib;

@end

