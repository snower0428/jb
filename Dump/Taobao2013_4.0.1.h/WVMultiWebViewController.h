//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVWebViewController.h"

@class NSString;

@interface WVMultiWebViewController : WVWebViewController
{
    BOOL _useNavigationBar;
    NSString *_protocolParamName;
    NSString *_protocolParamValue;
}

@property(nonatomic) BOOL useNavigationBar; // @synthesize useNavigationBar=_useNavigationBar;
@property(retain, nonatomic) NSString *protocolParamValue; // @synthesize protocolParamValue=_protocolParamValue;
@property(retain, nonatomic) NSString *protocolParamName; // @synthesize protocolParamName=_protocolParamName;
- (void).cxx_destruct;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

