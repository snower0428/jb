/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ALPTableViewBaseCell.h"

@class UITextField, UIImage, UIImageView;

@interface ALPTextFieldGroupCell : ALPTableViewBaseCell {
@private
	UIImageView* _cellBackgroundImageView;
	UIImageView* _lineImageView;
	int _postion;
	UIImage* _defaultImg;
	UIImage* _selImg;
	UIImageView* _imgageBgView;
	UITextField* _textField;
}
@property(retain, nonatomic) UITextField* textField;
@property(retain, nonatomic) UIImageView* imgageBgView;
@property(retain, nonatomic) UIImage* selImg;
@property(retain, nonatomic) UIImage* defaultImg;
@property(retain, nonatomic) UIImageView* lineImageView;
@property(retain, nonatomic) UIImageView* cellBackgroundImageView;
@property(assign, nonatomic) int postion;
-(void).cxx_destruct;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)deselectItem;
-(void)loadDefaultImage;
-(void)loadSelImage;
-(BOOL)isOS7;
-(void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
-(void)onPressed;
-(id)cellTextField;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

