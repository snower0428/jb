/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FinaLoaderWizardController.h"

@class NSString, NSDictionary;

@interface FinaRefundResultController : FinaLoaderWizardController {
	NSString* _taskNo;
	NSDictionary* _record;
	NSString* _total;
}
-(void)reloadExtra;
-(void)doneButtonClicked:(id)clicked;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)viewDidLoad;
-(void)dealloc;
-(id)initWithRecord:(id)record total:(id)total taskNo:(id)no;
@end

