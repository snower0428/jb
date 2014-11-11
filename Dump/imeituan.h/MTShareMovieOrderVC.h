//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseViewController.h"

#import "MTShareActionSheetDelegate.h"

@class MTAutoLinearLayoutScrollView, MTBaseCell, MTMovieOrder;

@interface MTShareMovieOrderVC : MTBaseViewController <MTShareActionSheetDelegate>
{
    MTMovieOrder *_movieOrder;
    MTAutoLinearLayoutScrollView *_listView;
    MTBaseCell *_codeCell;
    MTBaseCell *_cinemaCell;
    MTBaseCell *_seatCell;
}

- (void).cxx_destruct;
- (void)didClickCell:(id)arg1;
- (id)genMessage;
- (id)payloadForShareMethod:(int)arg1;
- (void)onClickShareButton;
- (void)viewDidLoad;
- (void)setupShareUI;
- (void)loadView;
- (id)initWithOrder:(id)arg1;

@end

