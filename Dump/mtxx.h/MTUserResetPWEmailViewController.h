//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MTHttpRequestDelegate.h"

@class MTUserHttpRequest, UIButton, UITextField;

__attribute__((visibility("hidden")))
@interface MTUserResetPWEmailViewController : UIViewController <MTHttpRequestDelegate>
{
    UITextField *textField;
    MTUserHttpRequest *_httpRequest;
    UIButton *_submitButton;
}

@property(nonatomic) __weak UIButton *submitButton; // @synthesize submitButton=_submitButton;
- (void).cxx_destruct;
- (BOOL)judeValidity:(id)arg1;
- (void)findPasswordSuccessWithError:(id)arg1;
- (void)findPasswordSuccessWithEMailURL:(id)arg1;
- (void)actionSend:(id)arg1;
- (void)actionBack:(id)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)dealloc;

@end

