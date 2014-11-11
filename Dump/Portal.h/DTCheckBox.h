/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage, UIImageView, UILabel;
@protocol DTCheckBoxDelegate;

@interface DTCheckBox : XXUnknownSuperclass {
@private
	UIImageView* _iconView;
	UILabel* _titleLabel;
	id<DTCheckBoxDelegate> _delegate;
	UIImage* _normalImage;
	UIImage* _selectedImage;
}
@property(retain, nonatomic) UIImage* selectedImage;
@property(retain, nonatomic) UIImage* normalImage;
@property(assign, nonatomic) __weak id<DTCheckBoxDelegate> delegate;
@property(retain, nonatomic) UILabel* titleLabel;
@property(retain, nonatomic) UIImageView* iconView;
-(void).cxx_destruct;
-(void)drawRect:(CGRect)rect;
-(void)checkBoxClicked:(id)clicked;
-(void)setSelected:(BOOL)selected;
-(id)imageForState:(unsigned)state;
-(void)setImage:(id)image forState:(unsigned)state;
-(id)initWithFrame:(CGRect)frame;
@end
