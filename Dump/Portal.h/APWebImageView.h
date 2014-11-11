/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableData, UIImage, NSURL, NSURLConnection;
@protocol APHTTPRequest;

@interface APWebImageView : XXUnknownSuperclass {
@private
	BOOL _autoDisplayActivityInidicator;
	NSURL* _URL;
	UIImage* _placeholder;
	id<APHTTPRequest> _httpRequest;
	NSURLConnection* _connection;
	NSMutableData* _responseData;
}
@property(retain, nonatomic) NSMutableData* responseData;
@property(assign, nonatomic) NSURLConnection* connection;
@property(retain, nonatomic) id<APHTTPRequest> httpRequest;
@property(assign, nonatomic) BOOL autoDisplayActivityInidicator;
@property(retain, nonatomic) UIImage* placeholder;
@property(retain, nonatomic) NSURL* URL;
-(void)hideActivityIndicator;
-(void)showActivityIndicator;
-(void)requestDidFail:(id)request;
-(void)requestDidFinish:(id)request;
-(void)requestDidStart:(id)request;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didReceiveData:(id)data;
-(id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;
-(void)didFailDownloadWithError:(id)error;
-(void)didFinishDownload;
-(void)willStartDownload;
-(void)layoutSubviews;
-(void)setImage:(id)image;
-(void)stopDownload;
-(void)startDownload;
-(void)loginRequestDidFinish;
-(void)commonInit;
-(id)initWithURL:(id)url;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
@end
