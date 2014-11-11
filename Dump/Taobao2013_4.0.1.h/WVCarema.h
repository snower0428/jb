//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ASIHTTPRequestDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, UIWebView, WVRequest, WVWebViewController;

@interface WVCarema : NSObject <UIActionSheetDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, ASIHTTPRequestDelegate>
{
    BOOL _takingPhoto;
    WVWebViewController *_sourceViewController;
    UIWebView *_sourceWebView;
    NSString *_takingPhotoType;
    int _takingPhotoUploadModel;
    CDUnknownBlockType _uploadImageCallback;
    NSMutableDictionary *_uploadImageJSBridgeResult;
    WVRequest *_tokenRequest;
    WVRequest *_uploadReqest;
    NSMutableArray *_tmpFileList;
}

@property(retain, nonatomic) NSMutableArray *tmpFileList; // @synthesize tmpFileList=_tmpFileList;
@property(retain, nonatomic) WVRequest *uploadReqest; // @synthesize uploadReqest=_uploadReqest;
@property(retain, nonatomic) WVRequest *tokenRequest; // @synthesize tokenRequest=_tokenRequest;
@property(retain, nonatomic) NSMutableDictionary *uploadImageJSBridgeResult; // @synthesize uploadImageJSBridgeResult=_uploadImageJSBridgeResult;
@property(copy, nonatomic) CDUnknownBlockType uploadImageCallback; // @synthesize uploadImageCallback=_uploadImageCallback;
@property(nonatomic) int takingPhotoUploadModel; // @synthesize takingPhotoUploadModel=_takingPhotoUploadModel;
@property(nonatomic) NSString *takingPhotoType; // @synthesize takingPhotoType=_takingPhotoType;
@property(nonatomic) BOOL takingPhoto; // @synthesize takingPhoto=_takingPhoto;
@property(retain, nonatomic) UIWebView *sourceWebView; // @synthesize sourceWebView=_sourceWebView;
@property(retain, nonatomic) WVWebViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
- (void).cxx_destruct;
- (void)webViewFireEvent:(id)arg1 withParam:(id)arg2;
- (void)fireEventNotifyForPrepareUploadPhotoSuccess;
- (void)fireEventNotifyForTakePhotoSuccess;
- (void)fireEventNotifyForPressPhotoSuccess;
- (void)fireEventNotifyForSavePhotoSuccess;
- (void)saveContextObjectForUploadForKey:(id)arg1 withObject:(id)arg2;
- (void)afterProcessTakePhoto;
- (void)markBeginProcess;
- (BOOL)checkDictionaryParam:(id)arg1;
- (id)dictionaryParam:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestSuccess:(id)arg1;
- (void)uploadImageRequest:(id)arg1 withImageLocalPath:(id)arg2;
- (void)uploadImageToCDN:(id)arg1 withModal:(int)arg2;
- (void)createFolder:(id)arg1;
- (void)checkMuchFolderExist;
- (void)checkYYZFloderExist;
- (void)checkFolder;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)startPhotoWithType:(int)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)chooseImage;
- (void)releaseHandler;
- (void)confirmUploadPhoto:(id)arg1 withCallBack:(CDUnknownBlockType)arg2;
- (void)takePhoto:(id)arg1 withCallBack:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

