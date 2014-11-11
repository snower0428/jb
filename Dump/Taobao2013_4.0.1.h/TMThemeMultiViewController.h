//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "TMImageDownloaderDelegate.h"
#import "TMLogicEngineDelegate.h"
#import "TMRefreshTableHeaderDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class TMLogicModel_Album, TMRefreshTableHeaderView, UITableView;

@interface TMThemeMultiViewController : TBViewController <UITableViewDataSource, UITableViewDelegate, TMLogicEngineDelegate, TMImageDownloaderDelegate, TMRefreshTableHeaderDelegate>
{
    float _contentOffset;
    BOOL _receivedMemoryWarning;
    BOOL _isLoading;
    UITableView *_tableView;
    TMLogicModel_Album *_albumData;
    TMRefreshTableHeaderView *_refreshView;
    long long _themeId;
}

@property(retain, nonatomic) TMRefreshTableHeaderView *refreshView; // @synthesize refreshView=_refreshView;
@property(retain, nonatomic) TMLogicModel_Album *albumData; // @synthesize albumData=_albumData;
@property(nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long themeId; // @synthesize themeId=_themeId;
- (void).cxx_destruct;
- (void)tmLogicEngineFailed:(id)arg1 request:(id)arg2 data:(id)arg3;
- (void)tmLogicEngineSuccess:(id)arg1 request:(id)arg2 data:(id)arg3;
- (void)tmImageDownloaderSuccess:(id)arg1 request:(id)arg2 data:(id)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tmRefreshTableHeaderDataSourceLastUpdated:(id)arg1;
- (BOOL)tmRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)tmRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)requestThemeImage:(id)arg1 andWidth:(int)arg2 andHeight:(int)arg3 withUserInfo:(id)arg4;
- (void)requestThemeAlbum;
- (void)dealloc;
- (void)statusBarFrameDidChanged:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

@end

