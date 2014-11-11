/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImagePickerController, HPUserCardEditorViewController, UIActionSheet;

@interface HeadImageEditPortal : XXUnknownSuperclass <UIActionSheetDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
@private
	int sourceType;
	HPUserCardEditorViewController* editHeadViewController;
	UIImagePickerController* _imagePicker;
	UIActionSheet* _actionSheet;
}
@property(retain, nonatomic) UIActionSheet* actionSheet;
@property(retain, nonatomic) HPUserCardEditorViewController* editHeadViewController;
@property(retain, nonatomic) UIImagePickerController* imagePicker;
-(void).cxx_destruct;
-(void)exitApplication:(id)application;
-(void)imagePickerControllerDidCancel:(id)imagePickerController;
-(void)showChildren:(id)children withName:(id)name;
-(id)findTheChildren:(id)children withName:(id)name;
-(void)resetButtonText:(id)text;
-(void)navigationController:(id)controller didShowViewController:(id)controller2 animated:(BOOL)animated;
-(void)navigationController:(id)controller willShowViewController:(id)controller2 animated:(BOOL)animated;
-(void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
-(void)actionSheetCancel:(id)cancel;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(id)getPortalActionSheet;
@end

