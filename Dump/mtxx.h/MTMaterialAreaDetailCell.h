//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MTBadgeView, MTMaterialAreaDetail, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface MTMaterialAreaDetailCell : UITableViewCell
{
    MTBadgeView *_badgeView;
    UIImageView *_classifyImageView;
    UIImageView *_classifyBackgroundImageView;
    UILabel *_classifyNameLabel;
    UILabel *_classifyDescriptionLabel;
    MTMaterialAreaDetail *_areaDetail;
}

@property(retain, nonatomic) MTMaterialAreaDetail *areaDetail; // @synthesize areaDetail=_areaDetail;
@property(retain, nonatomic) UILabel *classifyDescriptionLabel; // @synthesize classifyDescriptionLabel=_classifyDescriptionLabel;
@property(retain, nonatomic) UILabel *classifyNameLabel; // @synthesize classifyNameLabel=_classifyNameLabel;
@property(retain, nonatomic) UIImageView *classifyBackgroundImageView; // @synthesize classifyBackgroundImageView=_classifyBackgroundImageView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)updateCountToZero;
- (void)awakeFromNib;
- (void)initialize;

@end
