/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITableViewDataSource.h"
#import "Portal-Structs.h"
#import "UITableViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ALPTableView, LogisticsDetailController;

@interface LogisticsChartController : XXUnknownSuperclass <UITableViewDataSource, UITableViewDelegate> {
@private
	ALPTableView* chartTableView;
	LogisticsDetailController* detailController;
}
@property(retain, nonatomic) LogisticsDetailController* detailController;
@property(retain, nonatomic) ALPTableView* chartTableView;
-(void).cxx_destruct;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)numberOfSectionsInTableView:(id)tableView;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(id)_prepareChartCellTableView:(id)view atIndex:(int)index;
-(id)_prepareTitleCellTableView:(id)view;
-(id)obtainCellWithReuseIdentifier:(id)reuseIdentifier;
-(id)initWithDetailController:(id)detailController;
@end

