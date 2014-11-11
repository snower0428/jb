/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ALPTextFieldView.h"
#import "UIActionSheetDelegate.h"
#import "Portal-Structs.h"

@class UIImageView;

@interface ALPTouchableTextFieldView : ALPTextFieldView <UIActionSheetDelegate> {
@private
	int _fieldType;
	id _fieldBlock;
	UIImageView* _prefixIcon;
}
@property(retain, nonatomic) UIImageView* prefixIcon;
-(void).cxx_destruct;
-(id)getAssociatedObject;
-(void)setAssociatedObject:(id)object;
-(void)handleTap:(id)tap;
-(void)initTapEvent;
-(void)parseFieldType:(id)type;
-(void)loadData:(id)data;
-(void)setValueStyleWithFontSize:(float)fontSize WithForeClr:(id)foreClr;
-(id)initWithFrame:(CGRect)frame WithBlock:(id)block;
@end

