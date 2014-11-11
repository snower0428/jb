/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DTViewController.h"
#import "Portal-Structs.h"

@class NSDictionary, UIButton, HPSimpleImageEditorView;

@interface HPUserCardEditorViewController : DTViewController {
@private
	HPSimpleImageEditorView* simpleImageEditorView;
	UIButton* rotateButton;
	NSDictionary* photoInfo;
}
@property(assign, nonatomic) __weak NSDictionary* photoInfo;
@property(retain, nonatomic) UIButton* rotateButton;
@property(retain, nonatomic) HPSimpleImageEditorView* simpleImageEditorView;
-(void).cxx_destruct;
-(void)viewWillAppear:(BOOL)view;
-(void)pop;
-(void)saveButtonDidClickedEx:(id)saveButton;
-(void)rotateButtonOnClick:(id)click;
-(CGSize)properSizeForResizingLargeImage:(id)resizingLargeImage;
-(id)scaleImage:(id)image scaleToSize:(CGSize)size;
-(void)back;
-(void)initSubView;
-(void)viewDidLoad;
-(id)initWithImageInfo:(id)imageInfo;
@end
