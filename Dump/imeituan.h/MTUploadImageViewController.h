//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class MTUploadImageBaseService, NSMutableArray;

@interface MTUploadImageViewController : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    int _lineCount;
    int _currentIndex;
    struct UIEdgeInsets _padding;
    MTUploadImageBaseService *_service;
    CDUnknownBlockType _heightChangedBlock;
    NSMutableArray *_uploadImageInfoArray;
    NSMutableArray *_uploadImageGridCellArray;
}

+ (unsigned int)lineCountWithOrderReviewPicInfoArray:(id)arg1;
@property(retain, nonatomic) NSMutableArray *uploadImageGridCellArray; // @synthesize uploadImageGridCellArray=_uploadImageGridCellArray;
@property(retain, nonatomic) NSMutableArray *uploadImageInfoArray; // @synthesize uploadImageInfoArray=_uploadImageInfoArray;
@property(copy, nonatomic) CDUnknownBlockType heightChangedBlock; // @synthesize heightChangedBlock=_heightChangedBlock;
- (void).cxx_destruct;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)didPickImage;
- (void)didSnapImage;
- (void)popActionSheet;
- (void)didTapUploadImageGridCellView:(id)arg1;
- (void)setUploadProgress:(float)arg1 Index:(unsigned int)arg2;
- (void)setUploadImageInfo:(id)arg1 Index:(unsigned int)arg2;
- (unsigned int)indexOfUploadImageInfo:(id)arg1;
- (void)updateUploadImageProgressWithUploadImageInfo:(id)arg1 progress:(float)arg2;
- (void)updateUploadImageStateWithUploadImageInfo:(id)arg1;
- (void)updateControlWithRowIndex:(unsigned int)arg1 CurrentPoint:(struct CGPoint)arg2;
- (void)checkUploadControlWithIndex:(unsigned int)arg1;
- (void)processError:(id)arg1;
- (void)uploadImage:(id)arg1;
- (void)addImageWithFilePath:(id)arg1 imageKeyString:(id)arg2;
- (void)addImage:(id)arg1 imageKeyString:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)setupUI;
- (void)viewDidLoad;
- (BOOL)isUploadingImage;
- (id)getSubmitImageInfoArray;
- (BOOL)isCanStopReviewAction;
- (void)setOrderReviewPicInfoArray:(id)arg1;
- (void)resgistServiceBlock;
- (id)initWithService:(id)arg1;

@end

