//
//  CCPhotosCameraUpload.h
//  Crypto Cloud Technology Nextcloud
//
//  Created by Marino Faggiana on 29/07/15.
//  Copyright (c) 2014 TWS. All rights reserved.
//
//  Author Marino Faggiana <m.faggiana@twsweb.it>
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#import <UIKit/UIKit.h>
#import <Photos/Photos.h>
#import <ImageIO/ImageIO.h>

#import "UIScrollView+EmptyDataSet.h"
#import "OCErrorMsg.h"
#import "TWMessageBarManager.h"
#import "UINavigationController+CCProgress.h"
#import "CCManageLocation.h"
#import "CCMetadata.h"
#import "CCDetail.h"
#import "CCUtility.h"
#import "CCCoreData.h"
#import "CCManageAsset.h"
#import "CCManageCameraUpload.h"
#import "CCSection.h"
#import "CCHud.h"
#import "OCNetworking.h"

@interface CCPhotosCameraUpload : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIActionSheetDelegate, DZNEmptyDataSetSource, DZNEmptyDataSetDelegate, CCManageLocationDelegate, PHPhotoLibraryChangeObserver, OCNetworkingDelegate>

@property (nonatomic, weak) CCDetail *detailViewController;
@property (nonatomic, strong) PHFetchResult *assetsFetchResult;

- (BOOL)checkIfLocationIsEnabled;

- (void)downloadFileSuccess:(CCMetadata *)metadata;
- (void)downloadFileFailure:(NSInteger)errorCode;

- (void)reloadDatasourceForced;
- (BOOL)createFolder:(NSString *)folderPathName;

@end
