/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, ASSETRTLabel;

@interface AssetTableViewRTCell : XXUnknownSuperclass {
@private
	ASSETRTLabel* _rtLabel;
	UILabel* _cellTitle;
}
@property(retain, nonatomic) ASSETRTLabel* rtLabel;
@property(retain, nonatomic) UILabel* cellTitle;
+(id)textLabel;
-(void).cxx_destruct;
-(void)layoutSubviews;
-(void)setTitle:(id)title;
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

