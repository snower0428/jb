//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "EGOImageLoaderObserver.h"

@class NSURL, UIImage;

@interface EGOImageView : UIImageView <EGOImageLoaderObserver>
{
    NSURL *imageURL;
    UIImage *placeholderImage;
    id <EGOImageViewDelegate> delegate;
}

@property(nonatomic) id <EGOImageViewDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL;
- (void)dealloc;
- (void)imageLoaderDidFailToLoad:(id)arg1;
- (void)imageLoaderDidLoad:(id)arg1;
- (void)cancelImageLoad;
- (id)initWithPlaceholderImage:(id)arg1 delegate:(id)arg2;
- (id)initWithPlaceholderImage:(id)arg1;

@end

