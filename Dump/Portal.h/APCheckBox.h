/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "APView.h"
#import "Portal-Structs.h"

@class NSString, UIImage, UILabel, UIButton;

@interface APCheckBox : APView {
	UIButton* _button;
	UILabel* _label;
	UIImage* _selectedImage;
	UIImage* _unselectedImage;
	BOOL _checked;
	NSString* _clickScript;
}
@property(retain, nonatomic) NSString* clickScript;
@property(assign, nonatomic) BOOL enabled;
@property(assign, nonatomic) BOOL checked;
-(void)setcValue:(id)value aCtrlValue:(id)value2;
-(id)getValue:(id)value;
-(id)ctrl_value_get;
-(void)ctrl_value_set:(id)set;
-(void)ctrl_visible_set:(id)set;
-(void)setDesc:(id)desc;
-(void)buttonPress:(id)press;
-(void)setFrame:(CGRect)frame;
-(id)initWithNode:(id)node;
-(id)createLabel;
-(void)dealloc;
@end

