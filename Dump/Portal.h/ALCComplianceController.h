/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ALCReportDetailController.h"

@class ALCCreditReportDetailResult;

@interface ALCComplianceController : ALCReportDetailController {
@private
	ALCCreditReportDetailResult* detailData;
}
-(void)setDetailData:(id)data;
-(id)detailData;
-(void).cxx_destruct;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)viewDidLoad;
@end

