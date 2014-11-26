//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGScrollViewController.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UIScrollView, UITableView;

@interface IGAlbumPickerViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, IGScrollViewController>
{
    id <IGAlbumPickerViewControllerDelegate> _pickerDelegate;
    id <IGScrollViewDelegate> _scrollDelegate;
    int _assetType;
    UITableView *_tableView;
    NSArray *_albumsList;
}

@property(retain, nonatomic) NSArray *albumsList; // @synthesize albumsList=_albumsList;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) int assetType; // @synthesize assetType=_assetType;
@property(nonatomic) __weak id <IGScrollViewDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
@property(nonatomic) __weak id <IGAlbumPickerViewControllerDelegate> pickerDelegate; // @synthesize pickerDelegate=_pickerDelegate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)loadAlbumsList;
- (void)onAlbumListChanged;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)viewDidLoad;
- (id)initWithAssetType:(int)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

