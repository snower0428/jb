/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITableViewDelegate.h"
#import "Portal-Structs.h"
#import "NSURLConnectionDelegate.h"
#import "DTViewController.h"
#import "UITableViewDataSource.h"

@class UIViewController, UITableView, NSMutableData, NSDictionary, NSURLConnection;

@interface CPBResultController : DTViewController <UITableViewDataSource, UITableViewDelegate, NSURLConnectionDelegate> {
@private
	UIViewController* _fatherController;
	NSDictionary* _passedParams;
	UITableView* _tableView;
	id _cmsRequestCallback;
	NSDictionary* _cmsResult;
	NSMutableData* _httpRequestResData;
	NSURLConnection* _urlConnection;
}
@property(retain, nonatomic) NSURLConnection* urlConnection;
@property(retain, nonatomic) NSMutableData* httpRequestResData;
@property(retain, nonatomic) NSDictionary* cmsResult;
@property(copy, nonatomic) id cmsRequestCallback;
@property(retain, nonatomic) UITableView* tableView;
@property(retain, nonatomic) NSDictionary* passedParams;
@property(assign, nonatomic) UIViewController* fatherController;
-(void).cxx_destruct;
-(BOOL)hasCMS;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)startHttpRequestWith:(id)with completeCallback:(id)callback;
-(void)cancelGettingCMSUrl;
-(void)getCMSUrl:(id)url;
-(id)_CMSUrlString;
-(void)onOpenCMSPage;
-(void)onFinish;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)getSubmitCellWith:(id)with;
-(id)getCMSCell:(id)cell;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)createSubviews;
-(void)viewDidUnload;
-(void)viewDidLoad;
@end

