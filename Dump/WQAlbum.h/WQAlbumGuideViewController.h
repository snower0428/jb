//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class WQAlbumGuideView;

@interface WQAlbumGuideViewController : UIViewController
{
    BOOL _repeat;
    WQAlbumGuideView *_guideView;
}

@property(nonatomic) BOOL repeat; // @synthesize repeat=_repeat;
@property(retain, nonatomic) WQAlbumGuideView *guideView; // @synthesize guideView=_guideView;
- (void).cxx_destruct;
- (void)dismissGuide;
- (void)guideViewAnimate;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end

