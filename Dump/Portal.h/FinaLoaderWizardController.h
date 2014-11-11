/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "FinaDataLoaderDelegate.h"
#import "Portal-Structs.h"
#import "FinaWizardController.h"

@class FinaDataLoader;

@interface FinaLoaderWizardController : FinaWizardController <FinaDataLoaderDelegate> {
	FinaDataLoader* _loader;
}
-(void)loadAuto;
-(void)loadEnded:(id)ended;
-(void)reloadExtra;
-(void)loadPage;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)dealloc;
-(id)initWithStyle:(int)style;
-(id)init;
@end

