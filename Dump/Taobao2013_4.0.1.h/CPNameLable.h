//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class CPPresentFriendItem, UIButton, UIImageView, UILabel, UITextField;

@interface CPNameLable : UIView <UITextFieldDelegate>
{
    UIImageView *_viewBKNormal;
    UIImageView *_viewBKActive;
    UIButton *_blockBtn;
    UITextField *_textFiledEditName;
    UILabel *_label;
    int _state;
    id <textFiledEditEdit_pro> _delegate;
    id <vesselView_pro> _vesselViewDelegate;
    CPPresentFriendItem *data;
}

@property(nonatomic) id <vesselView_pro> vesselViewDelegate; // @synthesize vesselViewDelegate=_vesselViewDelegate;
@property(retain, nonatomic) CPPresentFriendItem *data; // @synthesize data;
@property(nonatomic) id <textFiledEditEdit_pro> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)blockBtnTap:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)setString:(id)arg1;
- (void)setState:(int)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)setLableFrame:(struct CGRect)arg1;
- (struct CGSize)getSize;
- (id)getText;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)removetextFiled;
- (void)createTextFiled;
- (id)init;
- (void)createControl;
- (id)initWithInfo:(id)arg1;

@end

