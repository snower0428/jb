//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, UIViewController<MFMailComposeViewControllerDelegate>;

@interface WQExportAlbumModel : NSObject
{
    NSLock *lock;
    unsigned int _exportStyle;
    UIViewController<MFMailComposeViewControllerDelegate> *_exportAlbumController;
    id <WQExportAlbumDataSource> _dataSource;
}

@property(nonatomic) __weak id <WQExportAlbumDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak UIViewController<MFMailComposeViewControllerDelegate> *exportAlbumController; // @synthesize exportAlbumController=_exportAlbumController;
@property(nonatomic) unsigned int exportStyle; // @synthesize exportStyle=_exportStyle;
- (void).cxx_destruct;
- (BOOL)canSendMail;
- (void)continueCreateAlbumPDFAndEmail;
- (void)exportAlbumByPDFWithNotifaction:(id)arg1;
- (void)exportAlbumNeedPWDForAlbum:(id)arg1;
- (BOOL)exportAlbumByPDFWithIndex:(id)arg1;
- (void)sendMailWithZip:(id)arg1;
- (BOOL)archiveFileToZip;
- (void)saveImgsToTmpReadyForZip:(id)arg1;
- (id)decryptAlbumWithPaths:(id)arg1;
- (BOOL)checkAlbumSizeForEmailLimitation:(id)arg1;
- (void)exportAlbumByZipWithNotifaction:(id)arg1;
- (BOOL)exportAlbumByZipWithIndex:(id)arg1;
- (void)saveImgToSystemAlbumCallInWithImage:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (BOOL)exportAlbumToSystemWithIndex:(id)arg1;
- (void)exportRate:(float)arg1;
- (BOOL)exportAlbumAtIndex:(id)arg1;

@end
