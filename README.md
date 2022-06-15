# cpp-sample

## Usage

- Push to github and run githubActions.
- Run below command at local, after you must create the Personal_token at SonarCloud.

```
cd /home/ec2-user/.sonar/
wget https://binaries.sonarsource.com/Distribution/sonar-scanner-cli/sonar-scanner-cli-4.7.0.2747-linux.zip
unzip sonar-scanner-cli-4.7.0.2747-linux.zip
wget https://sonarcloud.io/static/cpp/build-wrapper-linux-x86.zip
unzip build-wrapper-linux-x86.zip

cd ${project_directory}
export SONAR_TOKEN=${Personal_TOKEN}
/home/ec2-user/.sonar/build-wrapper-linux-x86/build-wrapper-linux-x86-64 --out-dir /home/ec2-user/.sonar/build_wrapper_output_directory ./sonar_build.sh 
/home/ec2-user/.sonar/sonar-scanner-4.7.0.2747-linux/bin/sonar-scanner --define sonar.host.url="https://sonarcloud.io" --define sonar.cfamily.build-wrapper-output="/home/ec2-user/.sonar/build_wrapper_output_directory"
```
