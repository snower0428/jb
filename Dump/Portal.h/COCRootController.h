/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import "COCBaseViewController.h"

@class NSArray, ChargeOneCardAppDelegate;

@interface COCRootController : COCBaseViewController {
@private
	NSArray* _cardList;
	DTViewController* _viewController;
	ChargeOneCardAppDelegate* _appDelegate;
}
@property(retain, nonatomic) ChargeOneCardAppDelegate* appDelegate;
@property(retain, nonatomic) DTViewController* viewController;
@property(copy, nonatomic) NSArray* cardList;
-(void).cxx_destruct;
-(void)didReceiveMemoryWarning;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)_requestCardListBackground;
-(void)_requestCardListModel;
-(void)_pushToSwitchViewController;
-(void)back;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)_processCardListSynchronized;
-(void)_createSubviews;
-(void)resetPage;
-(void)viewDidLoad;
@end

