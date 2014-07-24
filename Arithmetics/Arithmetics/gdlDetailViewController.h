//
//  gdlDetailViewController.h
//  Arithmetics
//
//  Created by Wood, Christopher <Christopher.Wood@parc.com> on 7/23/14.
//  Copyright (c) 2014 Gotham Digital Labs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface gdlDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
