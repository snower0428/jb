/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FinaWizardController.h"

@class NSArray, NSDictionary;
@protocol ApplyGiftControllerDelegate;

@interface FinaApplyGiftController : FinaWizardController {
	NSArray* _groups;
	NSDictionary* _selected;
	id<ApplyGiftControllerDelegate> _delegate;
}
-(void)backButtonClicked:(id)clicked;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)viewDidLoad;
-(void)dealloc;
-(id)initWithGroups:(id)groups selected:(id)selected delegate:(id)delegate;
@end

