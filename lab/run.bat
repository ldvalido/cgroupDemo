docker stop centos || true
docker rm centos || true
docker run -d --name centos -v datacpp:/data cgroupdemolab