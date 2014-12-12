/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SKProductsRequestDelegate.h"

@class SKProductsRequest;

@interface PFProductsRequestHandler : XXUnknownSuperclass <SKProductsRequestDelegate> {
	PFProductsRequestHandler* own;
	SKProductsRequest* productsRequest;
	id completion;
}
@property(copy, nonatomic) id completion;
@property(retain, nonatomic) SKProductsRequest* productsRequest;
@property(retain, nonatomic) PFProductsRequestHandler* own;
-(void).cxx_destruct;
-(void)requestDidFinish:(id)request;
-(void)request:(id)request didFailWithError:(id)error;
-(void)productsRequest:(id)request didReceiveResponse:(id)response;
-(id)initWithProductsRequest:(id)productsRequest completion:(id)completion;
@end
