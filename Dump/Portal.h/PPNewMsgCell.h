/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIImageView, UILabel;

@interface PPNewMsgCell : XXUnknownSuperclass {
@private
	float _cellWidth;
	UIImageView* _cellBackground;
	UILabel* _celltitle;
	UILabel* _titleTime;
	UILabel* _description;
	UILabel* _clickButton;
	UIImageView* _cellImage;
	NSString* _cellImageUrl;
	UIImageView* _cellLineImage;
}
@property(retain, nonatomic) UIImageView* cellLineImage;
@property(retain, nonatomic) NSString* cellImageUrl;
@property(retain, nonatomic) UIImageView* cellImage;
@property(retain, nonatomic) UILabel* clickButton;
@property(retain, nonatomic) UILabel* description;
@property(retain, nonatomic) UILabel* titleTime;
@property(retain, nonatomic) UILabel* celltitle;
@property(retain, nonatomic) UIImageView* cellBackground;
@property(assign, nonatomic) float cellWidth;
+(float)cellHeight:(id)height setImageUrl:(id)url setButtonUrl:(id)url3;
-(void).cxx_destruct;
-(id)dateFormatter;
-(id)dateString:(id)string;
-(void)setStartInfo:(id)info withNoWidthLimit:(BOOL)noWidthLimit;
-(void)setTime:(id)time;
-(void)setTitle:(id)title;
-(void)setLogoImgWithUrl:(id)url withDefault:(id)aDefault;
-(void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
-(void)setContent:(id)content setImageUrl:(id)url setButtonUrl:(id)url3;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier setContent:(id)content setimageUrl:(id)url setButtonUrl:(id)url5;
@end

