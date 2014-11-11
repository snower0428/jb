/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AssetNoDataCell.h"

@class UIImageView, UILabel;

@interface ACPNoDataCell : AssetNoDataCell {
@private
	UILabel* titleLabel;
	UIImageView* iconView;
}
-(void)setIconView:(id)view;
-(id)iconView;
-(void)setTitleLabel:(id)label;
-(id)titleLabel;
-(void).cxx_destruct;
-(void)layoutSubviews;
-(void)shadowEffect:(id)effect;
-(void)updateConfigData:(id)data;
-(void)configData;
-(void)releaseUI;
-(void)initUI;
@end
