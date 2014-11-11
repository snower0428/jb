/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIColor, UIImageView, UILabel;

@interface ALPListViewBaseCell : XXUnknownSuperclass {
@private
	UIImageView* _arrowImageView;
	UIImageView* _cellBackgroundImageView;
	UIImageView* _lineImageView;
	UIColor* normalBackground;
	UILabel* _cellTitle;
	UILabel* _cellInfo;
	UIImageView* _cellLogo;
	UIImageView* _cellInfoImg;
	UILabel* _cellDetailLabel;
}
@property(retain, nonatomic) UILabel* cellDetailLabel;
@property(retain, nonatomic) UIImageView* cellInfoImg;
@property(retain, nonatomic) UIImageView* cellLogo;
@property(retain, nonatomic) UILabel* cellInfo;
@property(retain, nonatomic) UIColor* normalBackground;
@property(retain, nonatomic) UIImageView* lineImageView;
@property(retain, nonatomic) UIImageView* cellBackgroundImageView;
@property(retain, nonatomic) UIImageView* arrowImageView;
@property(retain, nonatomic) UILabel* cellTitle;
+(float)cellHeight;
-(void).cxx_destruct;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isShowExtend;
-(void)setAccessoryType:(int)type;
-(void)reset;
-(void)setInfoDetail:(id)detail;
-(void)setExtendWithLogo:(id)logo;
-(void)setExtendLogo;
-(void)setNick:(id)nick;
-(void)setLogoImgWithUrl:(id)url withDefault:(id)aDefault;
-(void)setLogoImg:(id)img;
-(void)setTitle:(id)title;
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
