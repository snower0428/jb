//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBViewController.h"

#import "FBGraphObjectPagingLoaderDelegate.h"
#import "FBGraphObjectSelectionChangedDelegate.h"
#import "FBGraphObjectViewControllerDelegate.h"

@class FBGraphObjectPagingLoader, FBGraphObjectTableDataSource, FBGraphObjectTableSelection, FBSession, NSSet, NSString, NSTimer, UIActivityIndicatorView, UITableView;

@interface FBPlacePickerViewController : FBViewController <FBGraphObjectSelectionChangedDelegate, FBGraphObjectViewControllerDelegate, FBGraphObjectPagingLoaderDelegate>
{
    BOOL _hasSearchTextChangedSinceLastQuery;
    BOOL _trackActiveSession;
    UIActivityIndicatorView *_spinner;
    UITableView *_tableView;
    NSSet *_fieldsForRequest;
    int _radiusInMeters;
    int _resultsLimit;
    NSString *_searchText;
    FBSession *_session;
    FBGraphObjectTableDataSource *_dataSource;
    FBGraphObjectTableSelection *_selectionManager;
    FBGraphObjectPagingLoader *_loader;
    NSTimer *_searchTextChangedTimer;
    CDStruct_2c43369c _locationCoordinate;
}

+ (id)requestForPlacesSearchAtCoordinate:(CDStruct_c3b9c2ee)arg1 radiusInMeters:(int)arg2 resultsLimit:(int)arg3 searchText:(id)arg4 fields:(id)arg5 datasource:(id)arg6 session:(id)arg7;
+ (id)cacheDescriptorWithLocationCoordinate:(CDStruct_c3b9c2ee)arg1 radiusInMeters:(int)arg2 searchText:(id)arg3 resultsLimit:(int)arg4 fieldsForRequest:(id)arg5;
@property(nonatomic) BOOL trackActiveSession; // @synthesize trackActiveSession=_trackActiveSession;
@property(retain, nonatomic) NSTimer *searchTextChangedTimer; // @synthesize searchTextChangedTimer=_searchTextChangedTimer;
@property(retain, nonatomic) FBGraphObjectPagingLoader *loader; // @synthesize loader=_loader;
@property(retain, nonatomic) FBGraphObjectTableSelection *selectionManager; // @synthesize selectionManager=_selectionManager;
@property(retain, nonatomic) FBGraphObjectTableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) FBSession *session; // @synthesize session=_session;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(nonatomic) int resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(nonatomic) int radiusInMeters; // @synthesize radiusInMeters=_radiusInMeters;
@property(nonatomic) CDStruct_c3b9c2ee locationCoordinate; // @synthesize locationCoordinate=_locationCoordinate;
@property(copy, nonatomic) NSSet *fieldsForRequest; // @synthesize fieldsForRequest=_fieldsForRequest;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
- (void)pagingLoaderWasCancelled:(id)arg1;
- (void)pagingLoader:(id)arg1 handleError:(id)arg2;
- (void)pagingLoaderDidFinishLoading:(id)arg1;
- (void)pagingLoader:(id)arg1 didLoadData:(id)arg2;
- (void)pagingLoader:(id)arg1 willLoadURL:(id)arg2;
- (id)graphObjectTableDataSource:(id)arg1 pictureUrlOfItem:(id)arg2;
- (id)graphObjectTableDataSource:(id)arg1 subtitleOfItem:(id)arg2;
- (id)graphObjectTableDataSource:(id)arg1 titleOfItem:(id)arg2;
- (BOOL)graphObjectTableDataSource:(id)arg1 filterIncludesItem:(id)arg2;
- (void)graphObjectTableSelectionDidChange:(id)arg1;
- (void)logAppEvents:(BOOL)arg1;
- (void)clearData;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeSessionObserver:(id)arg1;
- (void)addSessionObserver:(id)arg1;
- (void)centerAndStartSpinner;
- (void)searchTextChangedTimerFired:(id)arg1;
- (id)createSearchTextChangedTimer;
- (void)updateView;
- (void)loadDataPostThrottleSkippingRoundTripIfCached:(id)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)clearSelection;
- (void)configureUsingCachedDescriptor:(id)arg1;
- (void)loadData;
@property(readonly, retain, nonatomic) id <FBGraphPlace> selection;
@property(nonatomic) BOOL itemPicturesEnabled;
- (void)dealloc;
- (void)initialize;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

