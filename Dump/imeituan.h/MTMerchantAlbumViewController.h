//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseViewController.h"

#import "MTPageViewDelegate.h"

@class MTMerchantAlbumDescriptionView, MTPageView, NSArray, UITapGestureRecognizer;

@interface MTMerchantAlbumViewController : MTBaseViewController <MTPageViewDelegate>
{
    UITapGestureRecognizer *_singleTap;
    MTPageView *_pageView;
    MTMerchantAlbumDescriptionView *_descriptionView;
    NSArray *_photos;
    int _offset;
    BOOL _hasMore;
    BOOL _loading;
    int _poiID;
    unsigned int _picIndex;
}

@property(nonatomic) unsigned int picIndex; // @synthesize picIndex=_picIndex;
@property(nonatomic) int poiID; // @synthesize poiID=_poiID;
- (void).cxx_destruct;
- (void)updateDescriptionView;
- (void)pageIndexDidChangeInPageView:(id)arg1;
- (id)pageView:(id)arg1 viewForPageAtIndex:(unsigned int)arg2;
- (unsigned int)numberOfPagesInPageView:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)didSingleTap;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)reloadPhotos;
- (void)loadMore:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
