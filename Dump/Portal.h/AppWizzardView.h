/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "QCheckBoxDelegate.h"
#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, UIButton;

@interface AppWizzardView : XXUnknownSuperclass <QCheckBoxDelegate> {
@private
	UIButton* okBtn;
	UIImageView* imageView;
}
@property(retain, nonatomic) UIImageView* imageView;
@property(retain, nonatomic) UIButton* okBtn;
-(void).cxx_destruct;
-(void)alphaAnimated:(BOOL)animated;
-(void)didSelectedCheckBox:(id)box checked:(BOOL)checked;
-(void)btnOnClick:(id)click;
-(id)initWithFrame:(CGRect)frame;
@end

