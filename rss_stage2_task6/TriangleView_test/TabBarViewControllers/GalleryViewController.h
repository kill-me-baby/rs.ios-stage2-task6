//
//  GalleryViewController.h
//  TriangleView_test
//
//  Created by worker on 20/06/2020.
//  Copyright © 2020 Mike Volkov. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Photos/Photos.h>
#import <AVKit/AVKit.h>

@interface GalleryViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property(nonatomic , strong) PHFetchResult *assetsFetchResults;
@property(nonatomic , strong) PHCachingImageManager *imageManager;

@end
