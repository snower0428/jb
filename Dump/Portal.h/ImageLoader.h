/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIImage, UIImageView;
@protocol ImageLoaderDelegate;

@interface ImageLoader : XXUnknownSuperclass {
	NSString* _URLString;
	UIImage* _image;
	UIImageView* _imageView;
	id<ImageLoaderDelegate> _delegate;
}
@property(retain, nonatomic) UIImageView* imageView;
@property(readonly, assign, nonatomic) UIImage* image;
@property(copy, nonatomic) NSString* URLString;
@property(assign, nonatomic) id<ImageLoaderDelegate> delegate;
-(void)loadImageOperationDidFail;
-(void)loadImageOperationDidFinish:(id)loadImageOperation;
-(void)loadImageThreadProc;
-(void)start;
-(void)dealloc;
-(id)initWithURLString:(id)urlstring imageView:(id)view;
@end

