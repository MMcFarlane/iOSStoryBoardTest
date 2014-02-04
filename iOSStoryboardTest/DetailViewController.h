//
//  DetailViewController.h
//  iOSStoryboardTest
//
//  Created by Maurice McFarlane on 2/3/14.
//  Copyright (c) 2014 MMcFarlane. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
