/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, UILabel;

@interface ALPListViewDoubleLineCell_temp : XXUnknownSuperclass {
@private
	BOOL _limitStartInfoWidth;
	UILabel* _cellTitle;
	UILabel* _cellStartInfo;
	UILabel* _cellEndInfo;
	UIImageView* _cellLogo;
	UIImageView* _cellExtendImg;
}
@property(assign, nonatomic) BOOL limitStartInfoWidth;
@property(retain, nonatomic) UIImageView* cellExtendImg;
@property(retain, nonatomic) UIImageView* cellLogo;
@property(retain, nonatomic) UILabel* cellEndInfo;
@property(retain, nonatomic) UILabel* cellStartInfo;
@property(retain, nonatomic) UILabel* cellTitle;
+(float)cellHeight;
-(void).cxx_destruct;
-(void)reset;
-(void)setEndInfoColor:(id)color;
-(void)setEndInfoInMiddle:(id)middle;
-(void)setEndInfo:(id)info;
-(void)setStartInfoColor:(id)color;
-(void)setStartInfo:(id)info withNoWidthLimit:(BOOL)noWidthLimit;
-(void)setStartInfo:(id)info;
-(void)setLogoImgWithUrl:(id)url withDefault:(id)aDefault;
-(void)setLogoImg:(id)img;
-(void)setTitle:(id)title;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
